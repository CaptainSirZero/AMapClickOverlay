# AMapClickOverlay  参考来自https://github.com/hadesh/iOS_3D_ClickOverlay
MAMapKit 点击选中overlay

前述

高德官方网站申请key.
阅读参考手册.
如果有任何疑问也可以发问题到官方论坛.
使用教程

ClickOverlay文件夹下的代码可以支持实现MAOverlay的点击，包括MAPolygon、MAPolyline、MACircle。
Utility提供如下方法判断点point是否在overlay图形内。
BOOL isOverlayWithLineWidthContainsPoint(id<MAOverlay> overlay, double mapPointDistance, MAMapPoint mapPoint)
其中参数mapPointDistance提供了overlay的线宽（需换算到MAMapPoint坐标系）。对非封闭图形MAPolyline，若点距MAPolyline的距离小于距离门限，则认为点在图形内。距离门限设置为4倍mapPointDistance。
举个例子,判断点touchLocation是否在selectableOverlay内。
// 把屏幕坐标转换为MAMapPoint坐标.
MAMapPoint mapPoint = MAMapPointForCoordinate([self.mapView convertPoint:touchLocation toCoordinateFromView:self.mapView]);
// overlay的线宽换算到MAMapPoint坐标系的宽度.
double mapPointDistance = [self mapPointsPerPointInViewAtCurrentZoomLevel] * View.lineWidth;
              
//判断是否选中了overlay.
if (isOverlayWithLineWidthContainsPoint(selectableOverlay.overlay, mapPointDistance, mapPoint) )
{
    // ... 
}
详见工程Demo文件夹。

架构

Controllers

<UIViewController>
BaseMapViewController 地图基类
ClickOverlayViewController 点击选中overlay
Models

Conform to <MAOverlay>
SelectableOverlay 自定义可选中的overlay(记录overlay选中状态,颜色属性)
Utility

Utility 数学运算(计算点是否包含在overlay响应区域内)

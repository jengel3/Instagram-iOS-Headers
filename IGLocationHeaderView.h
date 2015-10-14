/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:01 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Instagram/MKMapViewDelegate.h>

@protocol IGLocationHeaderViewDelegate;
@class IGMapView, NSString;

@interface IGLocationHeaderView : UIView <MKMapViewDelegate> {

	id<IGLocationHeaderViewDelegate> _delegate;
	IGMapView* _mapView;

}

@property (assign,nonatomic,__weak) id<IGLocationHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) IGMapView * mapView;                                    //@synthesize mapView=_mapView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSuperviewWidth:(float)arg1 location:(id)arg2 ;
-(void)mapViewDidReceiveTap:(id)arg1 ;
-(void)setMapView:(IGMapView *)arg1 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(IGMapView *)mapView;
-(void)setDelegate:(id<IGLocationHeaderViewDelegate>)arg1 ;
-(id<IGLocationHeaderViewDelegate>)delegate;
@end


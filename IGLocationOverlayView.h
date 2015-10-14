/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:01 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Instagram/MKMapViewDelegate.h>

@class MKMapView, UIView, UIImageView, CLLocation, NSString;

@interface IGLocationOverlayView : UIView <MKMapViewDelegate> {

	MKMapView* _map;
	UIView* _wrapperView;
	UIImageView* _frameView;
	CLLocation* _centerLocation;

}

@property (nonatomic,retain) MKMapView * map;                          //@synthesize map=_map - In the implementation block
@property (nonatomic,retain) UIView * wrapperView;                     //@synthesize wrapperView=_wrapperView - In the implementation block
@property (nonatomic,retain) UIImageView * frameView;                  //@synthesize frameView=_frameView - In the implementation block
@property (nonatomic,retain) CLLocation * centerLocation;              //@synthesize centerLocation=_centerLocation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCenterLocation:(id)arg1 ;
-(void)setWrapperView:(UIView *)arg1 ;
-(void)setCenterLocation:(CLLocation *)arg1 ;
-(void)setFrameView:(UIImageView *)arg1 ;
-(CLLocation *)centerLocation;
-(void)dealloc;
-(UIImageView *)frameView;
-(void)showInView:(id)arg1 ;
-(void)dismiss;
-(UIView *)wrapperView;
-(void)setMap:(MKMapView *)arg1 ;
-(MKMapView *)map;
@end


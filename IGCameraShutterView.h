/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:02 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface IGCameraShutterView : UIView {

	UIView* _backgroundView;
	UIView* _topBlind;
	UIView* _bottomBlind;
	int _state;

}

@property (assign,nonatomic) int state;              //@synthesize state=_state - In the implementation block
-(void)closeAnimated:(char)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)openAnimated:(char)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)openAnimated:(char)arg1 delay:(float)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)moveToPosition:(float)arg1 andDarken:(char)arg2 ;
-(void)shutterWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)moveToPosition:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(int)state;
-(void)setState:(int)arg1 ;
@end


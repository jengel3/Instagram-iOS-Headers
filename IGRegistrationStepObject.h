/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:12 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class UIView, IGRegistrationNavigationBar;


@protocol IGRegistrationStepObject <NSObject>
@property (nonatomic,readonly) UIView * stepView; 
@property (nonatomic,readonly) IGRegistrationNavigationBar * navBar; 
@property (nonatomic,readonly) UIView * iconView; 
@optional
-(void)setIsVerifying:(char)arg1;
-(void)stepViewWasTapped;

@required
-(UIView *)stepView;
-(void)stepViewWillAppear;
-(IGRegistrationNavigationBar *)navBar;
-(UIView *)iconView;

@end


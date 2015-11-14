/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:04:07 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSTimer;

@interface AFNetworkActivityIndicatorManager : NSObject {

	char _enabled;
	int _activityCount;
	NSTimer* _activityIndicatorVisibilityTimer;

}

@property (assign,getter=isEnabled,nonatomic) char enabled;                                                                //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) char isNetworkActivityIndicatorVisible; 
@property (assign,nonatomic) int activityCount;                                                                            //@synthesize activityCount=_activityCount - In the implementation block
@property (nonatomic,retain) NSTimer * activityIndicatorVisibilityTimer;                                                   //@synthesize activityIndicatorVisibilityTimer=_activityIndicatorVisibilityTimer - In the implementation block
@property (getter=isNetworkActivityIndicatorVisible,nonatomic,readonly) char networkActivityIndicatorVisible; 
+(id)keyPathsForValuesAffectingIsNetworkActivityIndicatorVisible;
+(id)sharedManager;
-(void)networkRequestDidStart:(id)arg1 ;
-(void)networkRequestDidFinish:(id)arg1 ;
-(NSTimer *)activityIndicatorVisibilityTimer;
-(void)updateNetworkActivityIndicatorVisibility;
-(void)setActivityIndicatorVisibilityTimer:(NSTimer *)arg1 ;
-(int)activityCount;
-(void)updateNetworkActivityIndicatorVisibilityDelayed;
-(void)incrementActivityCount;
-(void)decrementActivityCount;
-(void)setActivityCount:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isNetworkActivityIndicatorVisible;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
@end


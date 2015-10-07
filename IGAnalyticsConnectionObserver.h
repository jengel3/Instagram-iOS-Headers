/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:14 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IGAnalyticsConnectionObserverDelegate;
@class CTTelephonyNetworkInfo, NSString;

@interface IGAnalyticsConnectionObserver : NSObject {

	id<IGAnalyticsConnectionObserverDelegate> _delegate;
	CTTelephonyNetworkInfo* _telephonyNetworkInfo;
	NSString* _reachability;
	NSString* _radioTechnology;

}

@property (assign,nonatomic,__weak) id<IGAnalyticsConnectionObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CTTelephonyNetworkInfo * telephonyNetworkInfo;                          //@synthesize telephonyNetworkInfo=_telephonyNetworkInfo - In the implementation block
@property (nonatomic,copy) NSString * reachability;                                                  //@synthesize reachability=_reachability - In the implementation block
@property (nonatomic,copy) NSString * radioTechnology;                                               //@synthesize radioTechnology=_radioTechnology - In the implementation block
+(id)mapReachabilityStatus:(int)arg1 ;
-(void)observeConnectionChange;
-(CTTelephonyNetworkInfo *)telephonyNetworkInfo;
-(void)observeRadioTechnology;
-(void)observeReachability;
-(char)isRadioAccessTechnologySupported;
-(void)setRadioTechnology:(NSString *)arg1 ;
-(void)handleRadioTechnologyChanged:(id)arg1 ;
-(void)handleReachabilityChanged:(id)arg1 ;
-(NSString *)radioTechnology;
-(void)setTelephonyNetworkInfo:(CTTelephonyNetworkInfo *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<IGAnalyticsConnectionObserverDelegate>)arg1 ;
-(id<IGAnalyticsConnectionObserverDelegate>)delegate;
-(NSString *)reachability;
-(void)setReachability:(NSString *)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end


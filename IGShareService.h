/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:10 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface IGShareService : NSObject {

	char _isAvailableForSharing;
	char _wantsToShare;
	int _serviceType;

}

@property (nonatomic,readonly) int serviceType;                          //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,readonly) NSString * serviceName; 
@property (nonatomic,readonly) char hasAdvancedOptions; 
@property (assign,nonatomic) char isAvailableForSharing;                 //@synthesize isAvailableForSharing=_isAvailableForSharing - In the implementation block
@property (nonatomic,readonly) char isAdequatelyConfigured; 
@property (assign,nonatomic) char wantsToShare;                          //@synthesize wantsToShare=_wantsToShare - In the implementation block
@property (nonatomic,readonly) char willShare; 
+(id)serviceWithType:(int)arg1 ;
-(char)isAdequatelyConfigured;
-(char)hasAdvancedOptions;
-(char)isAvailableForSharing;
-(char)wantsToShare;
-(char)willShare;
-(void)setIsAvailableForSharing:(char)arg1 ;
-(void)setWantsToShare:(char)arg1 ;
-(id)initWithServiceType:(int)arg1 ;
-(NSString *)serviceName;
-(int)serviceType;
@end


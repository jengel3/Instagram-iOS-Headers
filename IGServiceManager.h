/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:46 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary;

@interface IGServiceManager : NSObject {

	NSDictionary* _serviceMap;

}

@property (nonatomic,retain) NSDictionary * serviceMap;              //@synthesize serviceMap=_serviceMap - In the implementation block
+(id)shareServicesForServiceTypes:(id)arg1 ;
+(id)imageForServiceType:(int)arg1 enabled:(char)arg2 ;
+(id)sharedServiceManager;
-(id)shortNameForService:(int)arg1 ;
-(char)serviceIsConfigured:(int)arg1 ;
-(id)allServiceTypes;
-(id)nameForService:(int)arg1 ;
-(void)setServiceMap:(NSDictionary *)arg1 ;
-(char)serviceIsConfigurable:(int)arg1 ;
-(id)serviceHelperForService:(int)arg1 ;
-(void)logoutService:(int)arg1 ;
-(void)logoutService:(int)arg1 unlink:(char)arg2 ;
-(char)serviceIsAdequatelyConfiguredForSharing:(int)arg1 ;
-(char)serviceHasAdvancedOptions:(int)arg1 ;
-(id)customTextForCellDetail:(int)arg1 ;
-(char)canToggle:(int)arg1 ;
-(id)activeServicesFromServiceArray:(id)arg1 ;
-(void)logoutAllServices;
-(id)serviceTypesForCurrentLocaleMediaType:(int)arg1 locationAvailable:(char)arg2 abbreviatedList:(char)arg3 ;
-(id)sharingInfoForService:(int)arg1 ;
-(NSDictionary *)serviceMap;
-(id)init;
@end


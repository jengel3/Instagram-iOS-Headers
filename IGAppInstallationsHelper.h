/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:19:59 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/SKStoreProductViewControllerDelegate.h>

@class SKStoreProductViewController, NSString;

@interface IGAppInstallationsHelper : NSObject <SKStoreProductViewControllerDelegate> {

	SKStoreProductViewController* _controller;
	NSString* _appStoreViewControllerLastAppID;

}

@property (nonatomic,retain) SKStoreProductViewController * controller;               //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) NSString * appStoreViewControllerLastAppID;              //@synthesize appStoreViewControllerLastAppID=_appStoreViewControllerLastAppID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isLayoutAppInstalled;
+(char)isBoomerangAppInstalled;
+(void)openLayoutWithAsset:(id)arg1 ;
+(void)openLayoutWithAsset:(id)arg1 usePhotosFramework:(char)arg2 assetIdentifier:(id)arg3 ;
+(char)isHyperlapseAppInstalled;
+(char)isFBAppInstalled;
+(void)openBoomerang;
+(char)isAppInstalled:(id)arg1 ;
+(void)logAppInstallationsInfo;
-(void)presentAppStoreViewControllerForAppID:(id)arg1 ;
-(void)appDidEnterForeground;
-(void)setAppStoreViewControllerLastAppID:(NSString *)arg1 ;
-(NSString *)appStoreViewControllerLastAppID;
-(void)dealloc;
-(id)init;
-(SKStoreProductViewController *)controller;
-(void)setController:(SKStoreProductViewController *)arg1 ;
-(void)productViewControllerDidFinish:(id)arg1 ;
@end


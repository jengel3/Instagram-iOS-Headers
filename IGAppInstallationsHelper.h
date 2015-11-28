
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>

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
+(void)openLayoutWithAsset:(id)arg1 usePhotosFramework:(char)arg2 assetIdentifier:(id)arg3 ;
+(char)isHyperlapseAppInstalled;
+(void)openBoomerang;
+(char)isFBAppInstalled;
+(char)isAppInstalled:(id)arg1 ;
+(void)logAppInstallationsInfo;
+(void)openLayoutWithAsset:(id)arg1 ;
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



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
+(char)isBoomerangAppInstalled;
+(char)isLayoutAppInstalled;
+(void)logAppInstallationsInfo;
+(void)openLayoutWithAsset:(id)arg1 assetIdentifier:(id)arg2 ;
+(void)openBoomerang;
+(char)isHyperlapseAppInstalled;
+(char)isFBAppInstalled;
+(char)isAppInstalled:(id)arg1 ;
-(void)presentAppStoreViewControllerForAppID:(id)arg1 fromViewController:(id)arg2 ;
-(void)appDidEnterForeground;
-(void)setAppStoreViewControllerLastAppID:(NSString *)arg1 ;
-(NSString *)appStoreViewControllerLastAppID;
-(void)dealloc;
-(id)init;
-(SKStoreProductViewController *)controller;
-(void)setController:(SKStoreProductViewController *)arg1 ;
-(void)productViewControllerDidFinish:(id)arg1 ;
@end


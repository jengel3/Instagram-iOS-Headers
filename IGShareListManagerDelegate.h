

@protocol IGShareListManagerDelegate <NSObject>
@required
-(void)shareListNeedsReloadForServiceAtIndex:(int)arg1;
-(id)viewControllerForShareConfiguration;
-(void)shareListNeedsFullReload;

@end


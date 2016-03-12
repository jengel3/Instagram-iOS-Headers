

@protocol IGShareListManagerDelegate <NSObject>
@required
-(void)shareListNeedsFullReload;
-(void)shareListNeedsReloadForServiceAtIndex:(int)arg1;
-(id)viewControllerForShareConfiguration;

@end


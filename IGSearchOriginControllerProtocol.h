
@class IGSearchViewController;


@protocol IGSearchOriginControllerProtocol <NSObject>
@property (nonatomic,readonly) IGSearchViewController * searchController; 
@property (assign,nonatomic) char showSearchOnViewDidAppear; 
@required
-(void)navigationControllerWillShowSearch;
-(void)prepareForPopToRootTransition;
-(char)showSearchOnViewDidAppear;
-(void)setShowSearchOnViewDidAppear:(char)arg1;
-(IGSearchViewController *)searchController;

@end



@class IGExploreSearchViewController;


@protocol IGSearchOriginControllerProtocol <NSObject>
@property (nonatomic,readonly) IGExploreSearchViewController * searchController; 
@property (assign,nonatomic) char showSearchOnViewDidAppear; 
@property (assign,nonatomic) char showSearchOnAppear; 
@required
-(void)navigationControllerWillShowSearch;
-(void)prepareForPopToRootTransition;
-(char)showSearchOnViewDidAppear;
-(void)setShowSearchOnViewDidAppear:(char)arg1;
-(char)showSearchOnAppear;
-(void)setShowSearchOnAppear:(char)arg1;
-(IGExploreSearchViewController *)searchController;

@end


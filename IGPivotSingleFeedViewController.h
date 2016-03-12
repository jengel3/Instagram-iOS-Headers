
#import <Instagram/IGFeedViewController_DEPRECATED.h>

@class IGFeedItem;

@interface IGPivotSingleFeedViewController : IGFeedViewController_DEPRECATED {

	IGFeedItem* _item;
	int _entryPoint;
	char _shouldShowRefreshButton;

}

@property (assign,nonatomic) char shouldShowRefreshButton;              //@synthesize shouldShowRefreshButton=_shouldShowRefreshButton - In the implementation block
-(id)analyticsModule;
-(id)initWithFeedItem:(id)arg1 entryPoint:(int)arg2 ;
-(void)displayPivots:(id)arg1 ;
-(int)entryPointMapping;
-(char)showRefreshButton;
-(char)shouldShowRefreshButton;
-(void)setShouldShowRefreshButton:(char)arg1 ;
@end


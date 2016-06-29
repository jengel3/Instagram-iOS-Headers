
#import <Instagram/IGFeedViewController_DEPRECATED.h>

@class IGFeedItem;

@interface IGPivotSingleFeedViewController : IGFeedViewController_DEPRECATED {

	IGFeedItem* _item;
	int _entryPoint;

}
-(id)analyticsModule;
-(id)initWithFeedItem:(id)arg1 entryPoint:(int)arg2 ;
-(void)displayPivots:(id)arg1 ;
-(int)entryPointMapping;
@end


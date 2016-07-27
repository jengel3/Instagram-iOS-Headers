
#import <Instagram/IGMainFeedHeaderViewDelegate.h>

@protocol IGMainFeedHeaderControllerDelegate;
@class IGMainFeedHeaderView, NSString;

@interface IGMainFeedHeaderController : NSObject <IGMainFeedHeaderViewDelegate> {

	int _status;
	IGMainFeedHeaderView* _headerView;
	id<IGMainFeedHeaderControllerDelegate> _delegate;

}

@property (nonatomic,readonly) int status;                                                        //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) IGMainFeedHeaderView * headerView;                                 //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic,__weak) id<IGMainFeedHeaderControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)displayAttributeStringWithLastStatus:(int)arg1 attributeString:(id)arg2 ;
-(id)buildStringForNewStoriesCount:(int)arg1 ;
-(void)didTapOnMainFeedHeaderViewLabel:(id)arg1 ;
-(void)setMainFeedStatus:(int)arg1 withNumOfNewStories:(int)arg2 ;
-(void)setDelegate:(id<IGMainFeedHeaderControllerDelegate>)arg1 ;
-(id)init;
-(id<IGMainFeedHeaderControllerDelegate>)delegate;
-(IGMainFeedHeaderView *)headerView;
-(int)status;
@end


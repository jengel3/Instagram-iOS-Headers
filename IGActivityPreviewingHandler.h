
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>

@protocol IGActivityFeedViewControllerProtocol, UIViewControllerPreviewingDelegate;
@class IGUserPreviewingHandler, IGFeedItemPreviewingHandler, NSString;

@interface IGActivityPreviewingHandler : NSObject <UIViewControllerPreviewingDelegate> {

	id<IGActivityFeedViewControllerProtocol> _newsViewController;
	IGUserPreviewingHandler* _userDelegate;
	IGFeedItemPreviewingHandler* _feedItemDelegate;
	id<UIViewControllerPreviewingDelegate> _usedDelegate;

}

@property (nonatomic,__weak,readonly) id<IGActivityFeedViewControllerProtocol> newsViewController;              //@synthesize newsViewController=_newsViewController - In the implementation block
@property (nonatomic,retain) IGUserPreviewingHandler * userDelegate;                                            //@synthesize userDelegate=_userDelegate - In the implementation block
@property (nonatomic,retain) IGFeedItemPreviewingHandler * feedItemDelegate;                                    //@synthesize feedItemDelegate=_feedItemDelegate - In the implementation block
@property (nonatomic,retain) id<UIViewControllerPreviewingDelegate> usedDelegate;                               //@synthesize usedDelegate=_usedDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<IGActivityFeedViewControllerProtocol>)newsViewController;
-(id)initWithNewsListViewController:(id)arg1 ;
-(IGFeedItemPreviewingHandler *)feedItemDelegate;
-(void)setFeedItemDelegate:(IGFeedItemPreviewingHandler *)arg1 ;
-(IGUserPreviewingHandler *)userDelegate;
-(void)setUsedDelegate:(id<UIViewControllerPreviewingDelegate>)arg1 ;
-(id<UIViewControllerPreviewingDelegate>)usedDelegate;
-(void)setUserDelegate:(IGUserPreviewingHandler *)arg1 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
@end


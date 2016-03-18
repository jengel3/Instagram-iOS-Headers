
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>

@class IGExploreMainFeedViewController, NSIndexPath, IGFeedItem, NSString;

@interface IGExploreMainFeedPreviewingHandler : NSObject <UIViewControllerPreviewingDelegate> {

	IGExploreMainFeedViewController* _controller;
	NSIndexPath* _thumbnailIndexPath;
	IGFeedItem* _thumbnailFeedItem;

}

@property (nonatomic,__weak,readonly) IGExploreMainFeedViewController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) NSIndexPath * thumbnailIndexPath;                                   //@synthesize thumbnailIndexPath=_thumbnailIndexPath - In the implementation block
@property (nonatomic,retain) IGFeedItem * thumbnailFeedItem;                                     //@synthesize thumbnailFeedItem=_thumbnailFeedItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setThumbnailFeedItem:(IGFeedItem *)arg1 ;
-(void)setThumbnailIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)thumbnailIndexPath;
-(IGFeedItem *)thumbnailFeedItem;
-(id)initWithController:(id)arg1 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(IGExploreMainFeedViewController *)controller;
@end


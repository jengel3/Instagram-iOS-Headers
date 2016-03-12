
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>

@class IGExploreMainFeedViewController, NSIndexPath, IGMediaThumbnailModel, NSString;

@interface IGExploreMainFeedPreviewingHandler : NSObject <UIViewControllerPreviewingDelegate> {

	IGExploreMainFeedViewController* _controller;
	NSIndexPath* _thumbnailIndexPath;
	IGMediaThumbnailModel* _thumbnailModel;

}

@property (nonatomic,__weak,readonly) IGExploreMainFeedViewController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) NSIndexPath * thumbnailIndexPath;                                   //@synthesize thumbnailIndexPath=_thumbnailIndexPath - In the implementation block
@property (nonatomic,retain) IGMediaThumbnailModel * thumbnailModel;                             //@synthesize thumbnailModel=_thumbnailModel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setThumbnailModel:(IGMediaThumbnailModel *)arg1 ;
-(void)setThumbnailIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)thumbnailIndexPath;
-(IGMediaThumbnailModel *)thumbnailModel;
-(id)initWithController:(id)arg1 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(IGExploreMainFeedViewController *)controller;
@end


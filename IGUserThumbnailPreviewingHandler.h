
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>

@class IGNewsTableViewController, IGUserPreviewingHandler, IGFeedThumbnailPreviewingHandler, NSString;

@interface IGUserThumbnailPreviewingHandler : NSObject <UIViewControllerPreviewingDelegate> {

	char _usedThumbnail;
	IGNewsTableViewController* _newsViewController;
	IGUserPreviewingHandler* _userDelegate;
	IGFeedThumbnailPreviewingHandler* _thumbnailDelegate;

}

@property (nonatomic,__weak,readonly) IGNewsTableViewController * newsViewController;              //@synthesize newsViewController=_newsViewController - In the implementation block
@property (nonatomic,retain) IGUserPreviewingHandler * userDelegate;                               //@synthesize userDelegate=_userDelegate - In the implementation block
@property (nonatomic,retain) IGFeedThumbnailPreviewingHandler * thumbnailDelegate;                 //@synthesize thumbnailDelegate=_thumbnailDelegate - In the implementation block
@property (assign,nonatomic) char usedThumbnail;                                                   //@synthesize usedThumbnail=_usedThumbnail - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGNewsTableViewController *)newsViewController;
-(id)initWithNewsTableViewController:(id)arg1 ;
-(void)setUsedThumbnail:(char)arg1 ;
-(IGFeedThumbnailPreviewingHandler *)thumbnailDelegate;
-(IGUserPreviewingHandler *)userDelegate;
-(char)usedThumbnail;
-(void)setUserDelegate:(IGUserPreviewingHandler *)arg1 ;
-(void)setThumbnailDelegate:(IGFeedThumbnailPreviewingHandler *)arg1 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
@end


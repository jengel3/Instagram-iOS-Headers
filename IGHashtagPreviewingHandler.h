
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>

@class IGHashtagModel, NSString;

@interface IGHashtagPreviewingHandler : NSObject <UIViewControllerPreviewingDelegate> {

	id _controller;
	IGHashtagModel* _hashtag;

}

@property (nonatomic,__weak,readonly) id controller;                //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) IGHashtagModel * hashtag;              //@synthesize hashtag=_hashtag - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGHashtagModel *)hashtag;
-(void)setHashtag:(IGHashtagModel *)arg1 ;
-(id)initWithController:(id)arg1 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(id)controller;
@end


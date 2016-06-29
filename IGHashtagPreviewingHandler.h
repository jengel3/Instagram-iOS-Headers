
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>

@protocol IGPreviewingControllerHandler;
@class IGHashtagModel, NSString;

@interface IGHashtagPreviewingHandler : NSObject <UIViewControllerPreviewingDelegate> {

	id _controller;
	id<IGPreviewingControllerHandler> _handler;
	IGHashtagModel* _hashtag;

}

@property (nonatomic,__weak,readonly) id controller;                                   //@synthesize controller=_controller - In the implementation block
@property (nonatomic,readonly) id<IGPreviewingControllerHandler> handler;              //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) IGHashtagModel * hashtag;                                 //@synthesize hashtag=_hashtag - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGHashtagModel *)hashtag;
-(id)initWithController:(id)arg1 handler:(id)arg2 ;
-(void)setHashtag:(IGHashtagModel *)arg1 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(id<IGPreviewingControllerHandler>)handler;
-(id)controller;
@end


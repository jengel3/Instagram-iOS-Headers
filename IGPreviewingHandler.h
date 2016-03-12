
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewControllerPreviewing.h>

@protocol UIViewControllerPreviewingDelegate;
@class UIGestureRecognizer, UIView, UIViewController, NSString;

@interface IGPreviewingHandler : NSObject <UIViewControllerPreviewing> {

	id<UIViewControllerPreviewingDelegate> _delegate;
	UIView* _sourceView;
	UIGestureRecognizer* _previewingGestureRecognizerForFailureRelationship;
	UIViewController* _controller;
	CGRect _sourceRect;
	CGRect _originalSourceRect;

}

@property (nonatomic,readonly) CGRect originalSourceRect;                                                            //@synthesize originalSourceRect=_originalSourceRect - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * controller;                                                 //@synthesize controller=_controller - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIGestureRecognizer * previewingGestureRecognizerForFailureRelationship;              //@synthesize previewingGestureRecognizerForFailureRelationship=_previewingGestureRecognizerForFailureRelationship - In the implementation block
@property (nonatomic,readonly) id<UIViewControllerPreviewingDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIView * sourceView;                                                                  //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic) CGRect sourceRect;                                                                      //@synthesize sourceRect=_sourceRect - In the implementation block
-(id)initWithDelegate:(id)arg1 sourceView:(id)arg2 presentingViewController:(id)arg3 ;
-(CGRect)originalSourceRect;
-(id<UIViewControllerPreviewingDelegate>)delegate;
-(UIView *)sourceView;
-(CGRect)sourceRect;
-(void)setSourceRect:(CGRect)arg1 ;
-(UIGestureRecognizer *)previewingGestureRecognizerForFailureRelationship;
-(UIViewController *)controller;
@end


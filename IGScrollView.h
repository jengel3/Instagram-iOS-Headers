
#import <UIKit/UIScrollView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSString;

@interface IGScrollView : UIScrollView <UIGestureRecognizerDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
@end


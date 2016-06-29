
#import <UIKit/UIScrollView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSMutableSet, NSString;

@interface IGScrollView : UIScrollView <UIGestureRecognizerDelegate> {

	NSMutableSet* _blockedGestures;

}

@property (nonatomic,readonly) NSMutableSet * blockedGestures;              //@synthesize blockedGestures=_blockedGestures - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableSet *)blockedGestures;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
@end


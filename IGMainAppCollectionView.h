
#import <UIKit/UICollectionView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGMainAppScrollGestureDelegate;
@class NSString;

@interface IGMainAppCollectionView : UICollectionView <UIGestureRecognizerDelegate> {

	id<IGMainAppScrollGestureDelegate> _scrollGestureDelegate;

}

@property (assign,nonatomic,__weak) id<IGMainAppScrollGestureDelegate> scrollGestureDelegate;              //@synthesize scrollGestureDelegate=_scrollGestureDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<IGMainAppScrollGestureDelegate>)scrollGestureDelegate;
-(void)setScrollGestureDelegate:(id<IGMainAppScrollGestureDelegate>)arg1 ;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
@end


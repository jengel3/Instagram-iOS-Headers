
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UITapGestureRecognizer, NSString;

@interface IGMarqueeCollectionView : UICollectionView <UIGestureRecognizerDelegate> {

	UITapGestureRecognizer* _tapGestureRecognizer;

}

@property (assign,nonatomic,__weak) UITapGestureRecognizer * tapGestureRecognizer;              //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didTapMarqueeCollectionView:(id)arg1 ;
-(id)marqueeLayout;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
@end


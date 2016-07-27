
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGExploreInterestButtonsViewDelegate;
@class NSMutableArray;

@interface IGExploreInterestButtonsView : UIView {

	id<IGExploreInterestButtonsViewDelegate> _delegate;
	NSMutableArray* _buttonArray;

}

@property (nonatomic,readonly) NSMutableArray * buttonArray;                                        //@synthesize buttonArray=_buttonArray - In the implementation block
@property (assign,nonatomic,__weak) id<IGExploreInterestButtonsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(float)viewHeightForButtonTitles:(id)arg1 constrainedWidth:(float)arg2 ;
-(NSMutableArray *)buttonArray;
-(void)layoutButtonsInOneRow:(id)arg1 lastButtonX:(float)arg2 ;
-(void)didSelectButton:(id)arg1 ;
-(void)addButtonsWithTitles:(id)arg1 ;
-(void)updateButtonsWithSelectedIndices:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGExploreInterestButtonsViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGExploreInterestButtonsViewDelegate>)delegate;
@end


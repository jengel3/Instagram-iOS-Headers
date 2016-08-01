
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGHONSelectionView, IGHONPromptTextView;

@interface IGHONSelectionPromptView : UIView {

	IGHONSelectionView* _selectionView;
	IGHONPromptTextView* _promptTextView;

}

@property (nonatomic,readonly) IGHONSelectionView * selectionView;                //@synthesize selectionView=_selectionView - In the implementation block
@property (nonatomic,readonly) IGHONPromptTextView * promptTextView;              //@synthesize promptTextView=_promptTextView - In the implementation block
-(void)setupSelectionViewWithDelegate:(id)arg1 ;
-(void)setupPromptTextView;
-(id)initWithSelectionViewDelegate:(id)arg1 ;
-(IGHONPromptTextView *)promptTextView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(IGHONSelectionView *)selectionView;
@end



#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGPreviewActionViewDelegate;
@class NSMutableArray, NSArray;

@interface IGPreviewActionView : UIView {

	id<IGPreviewActionViewDelegate> _delegate;
	NSMutableArray* _buttons;
	NSArray* _actionItems;

}

@property (assign,nonatomic,__weak) id<IGPreviewActionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableArray * buttons;                                     //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,copy) NSArray * actionItems;                                          //@synthesize actionItems=_actionItems - In the implementation block
-(void)onButtonPressed:(id)arg1 ;
-(id)initWithPreviewActionItems:(id)arg1 ;
-(void)setActionItems:(NSArray *)arg1 ;
-(NSArray *)actionItems;
-(void)setDelegate:(id<IGPreviewActionViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGPreviewActionViewDelegate>)delegate;
-(NSMutableArray *)buttons;
-(void)setButtons:(NSMutableArray *)arg1 ;
@end


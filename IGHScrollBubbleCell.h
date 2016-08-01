
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGHScrollBubbleCellDelegate;
@class UILabel, NSString;

@interface IGHScrollBubbleCell : UICollectionViewCell <UIGestureRecognizerDelegate> {

	id<IGHScrollBubbleCellDelegate> _delegate;
	UILabel* _textLabel;

}

@property (nonatomic,retain) UILabel * textLabel;                                          //@synthesize textLabel=_textLabel - In the implementation block
@property (assign,nonatomic,__weak) id<IGHScrollBubbleCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureWithItem:(id)arg1 ;
-(void)didTapBubbleCell;
-(id)cellBackgroundColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGHScrollBubbleCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id<IGHScrollBubbleCellDelegate>)delegate;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(UILabel *)textLabel;
-(void)setTextLabel:(UILabel *)arg1 ;
@end


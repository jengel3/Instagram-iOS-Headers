
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGInsightsContentRowListViewDelegate;
@class UIButton, UIView, NSArray;

@interface IGInsightsContentRowListView : UIView {

	char _showDetails;
	id<IGInsightsContentRowListViewDelegate> _delegate;
	UIButton* _textbutton;
	UIButton* _chevronbutton;
	UIView* _bottomSeparator;
	NSArray* _listItemViews;

}

@property (assign,nonatomic,__weak) id<IGInsightsContentRowListViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIButton * textbutton;                                               //@synthesize textbutton=_textbutton - In the implementation block
@property (nonatomic,readonly) UIButton * chevronbutton;                                            //@synthesize chevronbutton=_chevronbutton - In the implementation block
@property (nonatomic,readonly) UIView * bottomSeparator;                                            //@synthesize bottomSeparator=_bottomSeparator - In the implementation block
@property (nonatomic,copy) NSArray * listItemViews;                                                 //@synthesize listItemViews=_listItemViews - In the implementation block
@property (assign,nonatomic) char showDetails;                                                      //@synthesize showDetails=_showDetails - In the implementation block
-(id)initWithTitle:(id)arg1 paragraphUnits:(id)arg2 ;
-(void)buttonClick:(id)arg1 ;
-(void)initializeTextButtonWithTitle:(id)arg1 ;
-(void)initializeChevronButton;
-(void)initializeListItemViewsWithParagraphUnits:(id)arg1 ;
-(UIButton *)textbutton;
-(char)showDetails;
-(NSArray *)listItemViews;
-(UIButton *)chevronbutton;
-(void)layoutListItemViewsWithCurrentY:(float)arg1 ;
-(void)setShowDetails:(char)arg1 ;
-(void)flipChevronButton;
-(void)initializeBottomSeparator;
-(void)buttonClickInFilterSelectorView;
-(void)setListItemViews:(NSArray *)arg1 ;
-(void)setDelegate:(id<IGInsightsContentRowListViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGInsightsContentRowListViewDelegate>)delegate;
-(UIView *)bottomSeparator;
@end


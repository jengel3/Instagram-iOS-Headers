
#import <UIKit/UIView.h>

@protocol IGTabSwitcherDelegate;
@class NSArray, NSMutableArray, UITapGestureRecognizer;

@interface IGTabSwitcher : UIView {

	NSArray* _tabTitles;
	unsigned _selectedIndex;
	NSMutableArray* _titleLabelViews;
	NSMutableArray* _lineViews;
	UITapGestureRecognizer* _gestureRecognizer;
	id<IGTabSwitcherDelegate> _delegate;

}

@property (nonatomic,retain) NSArray * tabTitles;                                     //@synthesize tabTitles=_tabTitles - In the implementation block
@property (assign,nonatomic) unsigned selectedIndex;                                  //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (nonatomic,readonly) NSMutableArray * titleLabelViews;                      //@synthesize titleLabelViews=_titleLabelViews - In the implementation block
@property (nonatomic,readonly) NSMutableArray * lineViews;                            //@synthesize lineViews=_lineViews - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<IGTabSwitcherDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
-(id)createTitleLabel:(id)arg1 ;
-(id)createLineViews;
-(NSMutableArray *)lineViews;
-(void)highlightSelectedTab:(unsigned)arg1 ;
-(void)didTapOnSwithcer:(id)arg1 ;
-(NSMutableArray *)titleLabelViews;
-(void)dehighlightSelectedTab:(unsigned)arg1 ;
-(id)initWithTabTitles:(id)arg1 preselectedTabIndex:(unsigned)arg2 delegate:(id)arg3 ;
-(NSArray *)tabTitles;
-(void)setTabTitles:(NSArray *)arg1 ;
-(void)setDelegate:(id<IGTabSwitcherDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGTabSwitcherDelegate>)delegate;
-(void)setGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)gestureRecognizer;
-(unsigned)selectedIndex;
-(void)setSelectedIndex:(unsigned)arg1 ;
@end


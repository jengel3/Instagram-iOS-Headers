
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>

@class UIView, NSArray, UITableView, NSString;

@interface IGActionGroupView : UIView <UITableViewDataSource> {

	UIView* _headerView;
	NSArray* _actions;
	UIView* _headerBackgroundView;
	UIView* _backgroundView;
	UITableView* _actionsTableView;

}

@property (nonatomic,retain) UIView * headerView;                           //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,copy) NSArray * actions;                               //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) UIView * headerBackgroundView;               //@synthesize headerBackgroundView=_headerBackgroundView - In the implementation block
@property (nonatomic,readonly) UIView * backgroundView;                     //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) UITableView * actionsTableView;              //@synthesize actionsTableView=_actionsTableView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITableView *)actionsTableView;
-(void)flashScrollIndicatorsIfNeeded;
-(UIView *)headerBackgroundView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setActions:(NSArray *)arg1 ;
-(void)layoutSubviews;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSArray *)actions;
-(UIView *)backgroundView;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
@end


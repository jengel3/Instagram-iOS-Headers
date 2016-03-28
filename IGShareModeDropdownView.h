
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol IGShareModeDropdownViewDataSource, IGShareModeDropdownViewDelegate;
@class UITableView, NSString;

@interface IGShareModeDropdownView : UIView <UITableViewDataSource, UITableViewDelegate> {

	id<IGShareModeDropdownViewDataSource> _dataSource;
	id<IGShareModeDropdownViewDelegate> _delegate;
	int _selectedIndex;
	UITableView* _tableView;

}

@property (assign,nonatomic,__weak) id<IGShareModeDropdownViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<IGShareModeDropdownViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int selectedIndex;                                                    //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                                            //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)heightForItemCount:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 selectedIndex:(int)arg2 ;
-(void)setDataSource:(id<IGShareModeDropdownViewDataSource>)arg1 ;
-(void)setDelegate:(id<IGShareModeDropdownViewDelegate>)arg1 ;
-(void)reloadData;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<IGShareModeDropdownViewDataSource>)dataSource;
-(id<IGShareModeDropdownViewDelegate>)delegate;
-(UITableView *)tableView;
-(int)selectedIndex;
-(void)setSelectedIndex:(int)arg1 ;
@end


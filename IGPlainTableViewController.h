
#import <Instagram/IGViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class IGTableView, NSString;

@interface IGPlainTableViewController : IGViewController <UITableViewDelegate, UITableViewDataSource> {

	char _clearsSelectionOnViewWillAppear;
	IGTableView* _tableView;

}

@property (assign,nonatomic) char clearsSelectionOnViewWillAppear;              //@synthesize clearsSelectionOnViewWillAppear=_clearsSelectionOnViewWillAppear - In the implementation block
@property (nonatomic,readonly) IGTableView * tableView;                         //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)setTableInsets;
-(char)hasRowsInSection:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(void)viewDidLayoutSubviews;
-(IGTableView *)tableView;
-(id)initWithTableView:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)keyboardDidShow:(id)arg1 ;
-(void)setClearsSelectionOnViewWillAppear:(char)arg1 ;
-(char)clearsSelectionOnViewWillAppear;
-(void)keyboardWillHide:(id)arg1 ;
-(id)titleForHeaderInSection:(int)arg1 ;
@end


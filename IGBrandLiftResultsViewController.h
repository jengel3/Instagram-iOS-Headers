
#import <Instagram/IGViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSArray, UITableView, NSString;

@interface IGBrandLiftResultsViewController : IGViewController <UITableViewDataSource, UITableViewDelegate> {

	NSArray* _questions;
	UITableView* _tableView;

}

@property (nonatomic,retain) NSArray * questions;                   //@synthesize questions=_questions - In the implementation block
@property (nonatomic,retain) UITableView * tableView;               //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)prefersTabBarHidden;
-(id)labelForHeaderInSection:(int)arg1 ;
-(NSArray *)questions;
-(id)labelForFooterInSection:(int)arg1 ;
-(id)initWithQuestions:(id)arg1 ;
-(void)setQuestions:(NSArray *)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)dismiss;
@end


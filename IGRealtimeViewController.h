
#import <UIKit/UITableViewController.h>

@class NSArray;

@interface IGRealtimeViewController : UITableViewController {

	NSArray* _messages;

}

@property (nonatomic,retain) NSArray * messages;              //@synthesize messages=_messages - In the implementation block
-(id)initWithMessageInfos:(id)arg1 ;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)clearEventsTapped:(id)arg1 ;
-(id)getCellTitle:(id)arg1 ;
-(void)reloadData;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(NSArray *)messages;
-(void)setMessages:(NSArray *)arg1 ;
@end


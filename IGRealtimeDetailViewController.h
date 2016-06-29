
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, NSMutableArray, IGRealtimeMessageInfo, NSString;

@interface IGRealtimeDetailViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	UITableView* _tableView;
	NSMutableArray* _header;
	IGRealtimeMessageInfo* _messageInfo;

}

@property (nonatomic,retain) UITableView * tableView;                          //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSMutableArray * header;                          //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) IGRealtimeMessageInfo * messageInfo;              //@synthesize messageInfo=_messageInfo - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setupHeader;
-(float)topLayoutGuideLength;
-(void)asDict;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initWithMessageInfo:(id)arg1 ;
-(IGRealtimeMessageInfo *)messageInfo;
-(void)setMessageInfo:(IGRealtimeMessageInfo *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)viewDidLoad;
-(void)setHeader:(NSMutableArray *)arg1 ;
-(NSMutableArray *)header;
@end



#import <Instagram/IGGroupedTableViewController.h>
#import <UIKit/UIAlertViewDelegate.h>

@class NSString;

@interface IGFacebookEndPointViewController : IGGroupedTableViewController <UIAlertViewDelegate>

@property (nonatomic,readonly) unsigned currentSelection; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)subtitleForHeaderInSection:(int)arg1 ;
-(id)textForCellAtEndPoint:(unsigned)arg1 ;
-(unsigned)currentSelection;
-(void)setUpFacebookURL:(id)arg1 ;
-(void)showCustomAlertView;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)viewDidLoad;
-(id)titleForHeaderInSection:(int)arg1 ;
@end


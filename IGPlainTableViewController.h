/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:03:57 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

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
-(char)hasRowsInSection:(int)arg1 ;
-(void)setTableInsets;
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


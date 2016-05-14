/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:46 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UITableView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class IGFeedNetworkSource, NSArray, NSMutableArray, NSTimer, NSString;

@interface IGNetworkMonitor : UITableView <UITableViewDataSource, UITableViewDelegate> {

	IGFeedNetworkSource* _feedSource;
	NSArray* _operations;
	NSMutableArray* _executingOperations;
	NSMutableArray* _pendingOperations;
	NSTimer* _timer;

}

@property (nonatomic,retain) NSArray * operations;                                 //@synthesize operations=_operations - In the implementation block
@property (nonatomic,retain) NSMutableArray * executingOperations;                 //@synthesize executingOperations=_executingOperations - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingOperations;                   //@synthesize pendingOperations=_pendingOperations - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                      //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic,__weak) IGFeedNetworkSource * feedSource;              //@synthesize feedSource=_feedSource - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGFeedNetworkSource *)feedSource;
-(void)setFeedSource:(IGFeedNetworkSource *)arg1 ;
-(void)tick;
-(NSMutableArray *)executingOperations;
-(NSMutableArray *)pendingOperations;
-(id)displayTextForRequest:(id)arg1 ;
-(void)decorateCell:(id)arg1 forRequest:(id)arg2 ;
-(void)setExecutingOperations:(NSMutableArray *)arg1 ;
-(void)setPendingOperations:(NSMutableArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)stop;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(void)setOperations:(NSArray *)arg1 ;
-(NSArray *)operations;
@end

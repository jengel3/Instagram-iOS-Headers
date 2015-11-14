/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:04:12 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/FBGraphObjectDataSourceDataNeededDelegate.h>

@protocol FBGraphObjectPagingLoaderDelegate;
@class UITableView, FBGraphObjectTableDataSource, FBSession, NSString, FBRequestConnection;

@interface FBGraphObjectPagingLoader : NSObject <FBGraphObjectDataSourceDataNeededDelegate> {

	char _isResultFromCache;
	char _skipRoundtripIfCached;
	UITableView* _tableView;
	FBGraphObjectTableDataSource* _dataSource;
	FBSession* _session;
	id<FBGraphObjectPagingLoaderDelegate> _delegate;
	int _pagingMode;
	NSString* _nextLink;
	FBRequestConnection* _connection;
	NSString* _cacheIdentity;

}

@property (nonatomic,retain) UITableView * tableView;                                     //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) FBGraphObjectTableDataSource * dataSource;                   //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) FBSession * session;                                         //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) id<FBGraphObjectPagingLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int pagingMode;                                              //@synthesize pagingMode=_pagingMode - In the implementation block
@property (nonatomic,readonly) char isResultFromCache;                                    //@synthesize isResultFromCache=_isResultFromCache - In the implementation block
@property (nonatomic,retain) NSString * nextLink;                                         //@synthesize nextLink=_nextLink - In the implementation block
@property (nonatomic,retain) FBRequestConnection * connection;                            //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) NSString * cacheIdentity;                                      //@synthesize cacheIdentity=_cacheIdentity - In the implementation block
@property (assign,nonatomic) char skipRoundtripIfCached;                                  //@synthesize skipRoundtripIfCached=_skipRoundtripIfCached - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPagingMode:(int)arg1 ;
-(int)pagingMode;
-(NSString *)nextLink;
-(void)followNextLink;
-(void)setNextLink:(NSString *)arg1 ;
-(void)requestCompleted:(id)arg1 result:(id)arg2 error:(id)arg3 ;
-(NSString *)cacheIdentity;
-(void)setCacheIdentity:(NSString *)arg1 ;
-(void)addResultsAndUpdateView:(id)arg1 ;
-(void)graphObjectTableDataSourceNeedsData:(id)arg1 triggeredByIndexPath:(id)arg2 ;
-(char)isResultFromCache;
-(void)setSkipRoundtripIfCached:(char)arg1 ;
-(char)skipRoundtripIfCached;
-(id)initWithDataSource:(id)arg1 pagingMode:(int)arg2 ;
-(void)startLoadingWithRequest:(id)arg1 cacheIdentity:(id)arg2 skipRoundtripIfCached:(char)arg3 ;
-(FBSession *)session;
-(void)cancel;
-(void)setDataSource:(FBGraphObjectTableDataSource *)arg1 ;
-(void)setDelegate:(id<FBGraphObjectPagingLoaderDelegate>)arg1 ;
-(void)dealloc;
-(FBGraphObjectTableDataSource *)dataSource;
-(id<FBGraphObjectPagingLoaderDelegate>)delegate;
-(void)reset;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)updateView;
-(FBRequestConnection *)connection;
-(void)setConnection:(FBRequestConnection *)arg1 ;
-(void)setSession:(FBSession *)arg1 ;
@end


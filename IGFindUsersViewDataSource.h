
#import <Instagram/IGFeedStatusViewDataSource.h>

@protocol IGFindUsersViewDataSourceDelegate;
@class NSArray, NSString, IGBulkMediaRequestManager;

@interface IGFindUsersViewDataSource : NSObject <IGFeedStatusViewDataSource> {

	char _failedWithAuthorizationError;
	char _eagerlyFetchesProfilePictures;
	char _eagerlyFetchesThumbnails;
	char _moreAvailable;
	char _loading;
	id<IGFindUsersViewDataSourceDelegate> _delegate;
	NSArray* _featuredUserInfoList;
	int _status;
	NSString* _errorMessage;
	NSString* _maxId;
	IGBulkMediaRequestManager* _requestManager;

}

@property (nonatomic,retain) IGBulkMediaRequestManager * requestManager;                         //@synthesize requestManager=_requestManager - In the implementation block
@property (getter=isLoading) char loading;                                                       //@synthesize loading=_loading - In the implementation block
@property (nonatomic,retain) NSArray * featuredUserInfoList;                                     //@synthesize featuredUserInfoList=_featuredUserInfoList - In the implementation block
@property (assign,nonatomic) char moreAvailable;                                                 //@synthesize moreAvailable=_moreAvailable - In the implementation block
@property (nonatomic,retain) NSString * maxId;                                                   //@synthesize maxId=_maxId - In the implementation block
@property (assign,nonatomic,__weak) id<IGFindUsersViewDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int status;                                                         //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) char failedWithAuthorizationError;                                  //@synthesize failedWithAuthorizationError=_failedWithAuthorizationError - In the implementation block
@property (nonatomic,copy) NSString * errorMessage;                                              //@synthesize errorMessage=_errorMessage - In the implementation block
@property (assign,nonatomic) char eagerlyFetchesProfilePictures;                                 //@synthesize eagerlyFetchesProfilePictures=_eagerlyFetchesProfilePictures - In the implementation block
@property (assign,nonatomic) char eagerlyFetchesThumbnails;                                      //@synthesize eagerlyFetchesThumbnails=_eagerlyFetchesThumbnails - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)maxId;
-(void)fetchList;
-(void)fetchMore;
-(void)setRequestManager:(IGBulkMediaRequestManager *)arg1 ;
-(char)loadedOnce;
-(char)failedWithAuthorizationError;
-(IGBulkMediaRequestManager *)requestManager;
-(void)setFailedWithAuthorizationError:(char)arg1 ;
-(id)emptyMessage;
-(void)setFeaturedUserInfoList:(NSArray *)arg1 ;
-(void)fetchListWithRequest:(id)arg1 ;
-(void)prefetchThumbnailsForUserInfo:(id)arg1 ;
-(void)fetchThumbnailIURLsForUserIDs:(id)arg1 ;
-(void)fetchMoreWithRequest:(id)arg1 ;
-(id)parseListResponse:(id)arg1 ;
-(NSArray *)featuredUserInfoList;
-(void)setMaxId:(NSString *)arg1 ;
-(void)eagerLoadAvailableThumbnailsForUsers:(id)arg1 ;
-(void)eagerLoadAllProfilePicturesForUsers:(id)arg1 ;
-(void)fetchListWithRequest:(id)arg1 status:(int)arg2 successCallback:(/*^block*/id)arg3 failureCallback:(/*^block*/id)arg4 ;
-(void)fetchThumbnailsWithRequest:(id)arg1 ;
-(char)eagerlyFetchesProfilePictures;
-(char)eagerlyFetchesThumbnails;
-(void)setEagerlyFetchesProfilePictures:(char)arg1 ;
-(void)setEagerlyFetchesThumbnails:(char)arg1 ;
-(unsigned)itemCount;
-(void)setDelegate:(id<IGFindUsersViewDataSourceDelegate>)arg1 ;
-(id)init;
-(id<IGFindUsersViewDataSourceDelegate>)delegate;
-(char)isLoading;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)setMoreAvailable:(char)arg1 ;
-(char)moreAvailable;
-(void)setErrorMessage:(NSString *)arg1 ;
-(NSString *)errorMessage;
-(void)setLoading:(char)arg1 ;
@end


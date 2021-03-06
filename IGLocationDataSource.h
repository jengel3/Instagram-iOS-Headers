
#import <UIKit/UITableViewDataSource.h>

@protocol IGLocationDataSourceDelegate;
@class NSArray, IGRequest, NSString, CLLocation, NSDictionary;

@interface IGLocationDataSource : NSObject <UITableViewDataSource> {

	char _isLoading;
	char _isSearching;
	char _isLocating;
	char _locationIsFromEXIF;
	NSArray* _locations;
	NSArray* _EXIFLocations;
	IGRequest* _locationRequest;
	NSString* _lastRequestID;
	NSString* _responseRankTokenID;
	NSString* _responseQueryText;
	id<IGLocationDataSourceDelegate> _delegate;
	int _fetchStatus;
	CLLocation* _lastKnownLocation;
	NSDictionary* _lastKnownResponse;

}

@property (nonatomic,retain) NSString * lastRequestID;                                      //@synthesize lastRequestID=_lastRequestID - In the implementation block
@property (nonatomic,retain) NSString * responseRankTokenID;                                //@synthesize responseRankTokenID=_responseRankTokenID - In the implementation block
@property (nonatomic,retain) NSString * responseQueryText;                                  //@synthesize responseQueryText=_responseQueryText - In the implementation block
@property (nonatomic,retain) CLLocation * lastKnownLocation;                                //@synthesize lastKnownLocation=_lastKnownLocation - In the implementation block
@property (nonatomic,retain) NSDictionary * lastKnownResponse;                              //@synthesize lastKnownResponse=_lastKnownResponse - In the implementation block
@property (assign,nonatomic) char locationIsFromEXIF;                                       //@synthesize locationIsFromEXIF=_locationIsFromEXIF - In the implementation block
@property (nonatomic,retain) NSArray * locations;                                           //@synthesize locations=_locations - In the implementation block
@property (nonatomic,copy) NSArray * EXIFLocations;                                         //@synthesize EXIFLocations=_EXIFLocations - In the implementation block
@property (nonatomic,retain) IGRequest * locationRequest;                                   //@synthesize locationRequest=_locationRequest - In the implementation block
@property (assign,nonatomic) char isLoading;                                                //@synthesize isLoading=_isLoading - In the implementation block
@property (assign,nonatomic) char isSearching;                                              //@synthesize isSearching=_isSearching - In the implementation block
@property (assign,nonatomic) char isLocating;                                               //@synthesize isLocating=_isLocating - In the implementation block
@property (assign,nonatomic,__weak) id<IGLocationDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int fetchStatus;                                               //@synthesize fetchStatus=_fetchStatus - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIsSearching:(char)arg1 ;
-(IGRequest *)locationRequest;
-(int)fetchStatus;
-(char)isLocating;
-(id)locationForIndexPath:(id)arg1 ;
-(char)locationIsFromEXIF;
-(id)tableView:(id)arg1 errorCellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 statusCellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 locationCellForRowAtIndexPath:(id)arg2 ;
-(void)setEXIFLocations:(NSArray *)arg1 ;
-(void)setFetchStatus:(int)arg1 ;
-(NSDictionary *)lastKnownResponse;
-(void)handleLocationFetchSuccess:(id)arg1 queryText:(id)arg2 rankToken:(id)arg3 ;
-(void)setLocationIsFromEXIF:(char)arg1 ;
-(void)setLocationRequest:(IGRequest *)arg1 ;
-(void)setLastKnownResponse:(NSDictionary *)arg1 ;
-(void)handleLocationFetchError:(id)arg1 rankToken:(id)arg2 ;
-(void)fetchLocationsNearCLLocation:(id)arg1 atMediaCreationTime:(id)arg2 locationIsFromEXIF:(char)arg3 withQuery:(id)arg4 rankToken:(id)arg5 ;
-(void)setLastRequestID:(NSString *)arg1 ;
-(void)setResponseRankTokenID:(NSString *)arg1 ;
-(void)initGroupsFromResponse:(id)arg1 ;
-(NSArray *)EXIFLocations;
-(void)fetchLocationsNearCLLocation:(id)arg1 locationIsFromEXIF:(char)arg2 withQuery:(id)arg3 ;
-(void)fetchLocationsNearCLLocation:(id)arg1 atMediaCreationTime:(id)arg2 locationIsFromEXIF:(char)arg3 withQuery:(id)arg4 ;
-(void)fetchLocationsNearCLLocation:(id)arg1 locationIsFromEXIF:(char)arg2 withQuery:(id)arg3 rankToken:(id)arg4 ;
-(char)hasLocations;
-(void)setIsLocating:(char)arg1 ;
-(NSString *)lastRequestID;
-(NSString *)responseRankTokenID;
-(void)setResponseQueryText:(NSString *)arg1 ;
-(NSString *)responseQueryText;
-(char)isSearching;
-(void)setLocations:(NSArray *)arg1 ;
-(void)setDelegate:(id<IGLocationDataSourceDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<IGLocationDataSourceDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(char)isLoading;
-(void)setLastKnownLocation:(CLLocation *)arg1 ;
-(CLLocation *)lastKnownLocation;
-(void)setIsLoading:(char)arg1 ;
-(NSArray *)locations;
-(char)hasError;
@end


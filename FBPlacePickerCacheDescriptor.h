
#import <Instagram/Instagram-Structs.h>
#import <Instagram/FBCacheDescriptor.h>
#import <Instagram/FBGraphObjectPagingLoaderDelegate.h>

@class NSString, NSSet, FBGraphObjectPagingLoader;

@interface FBPlacePickerCacheDescriptor : FBCacheDescriptor <FBGraphObjectPagingLoaderDelegate> {

	char _hasCompletedFetch;
	int _radiusInMeters;
	int _resultsLimit;
	NSString* _searchText;
	NSSet* _fieldsForRequest;
	FBGraphObjectPagingLoader* _loader;
	SCD_Struct_IG30 _locationCoordinate;

}

@property (assign,nonatomic) SCD_Struct_IG30 locationCoordinate;              //@synthesize locationCoordinate=_locationCoordinate - In the implementation block
@property (assign,nonatomic) int radiusInMeters;                              //@synthesize radiusInMeters=_radiusInMeters - In the implementation block
@property (assign,nonatomic) int resultsLimit;                                //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,copy) NSString * searchText;                             //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,copy) NSSet * fieldsForRequest;                          //@synthesize fieldsForRequest=_fieldsForRequest - In the implementation block
@property (nonatomic,retain) FBGraphObjectPagingLoader * loader;              //@synthesize loader=_loader - In the implementation block
@property (assign,nonatomic) char hasCompletedFetch;                          //@synthesize hasCompletedFetch=_hasCompletedFetch - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prefetchAndCacheForSession:(id)arg1 ;
-(void)setHasCompletedFetch:(char)arg1 ;
-(char)hasCompletedFetch;
-(NSSet *)fieldsForRequest;
-(void)setFieldsForRequest:(NSSet *)arg1 ;
-(void)pagingLoaderDidFinishLoading:(id)arg1 ;
-(void)setRadiusInMeters:(int)arg1 ;
-(int)radiusInMeters;
-(id)initWithLocationCoordinate:(SCD_Struct_IG30)arg1 radiusInMeters:(int)arg2 searchText:(id)arg3 resultsLimit:(int)arg4 fieldsForRequest:(id)arg5 ;
-(FBGraphObjectPagingLoader *)loader;
-(void)setSearchText:(NSString *)arg1 ;
-(void)dealloc;
-(NSString *)searchText;
-(void)setLoader:(FBGraphObjectPagingLoader *)arg1 ;
-(int)resultsLimit;
-(void)setResultsLimit:(int)arg1 ;
-(SCD_Struct_IG30)locationCoordinate;
-(void)setLocationCoordinate:(SCD_Struct_IG30)arg1 ;
@end


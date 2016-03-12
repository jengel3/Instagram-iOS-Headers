

#import <Instagram/Instagram-Structs.h>
@class NSString;

@interface IGSimpleGeoMedia : NSObject {

	NSString* _userId;
	NSString* _mediaId;
	NSString* _compoundId;
	NSString* _thumbnail;
	NSString* _locationName;
	SCD_Struct_IG26 _coordinate;

}

@property (nonatomic,copy) NSString * userId;                         //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy) NSString * mediaId;                        //@synthesize mediaId=_mediaId - In the implementation block
@property (nonatomic,copy) NSString * compoundId;                     //@synthesize compoundId=_compoundId - In the implementation block
@property (nonatomic,copy) NSString * thumbnail;                      //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,copy) NSString * locationName;                   //@synthesize locationName=_locationName - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG26 coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
-(NSString *)mediaId;
-(id)fullResolution;
-(NSString *)compoundId;
-(char)isEqualToSimpleGeoMedia:(id)arg1 ;
-(void)setMediaId:(NSString *)arg1 ;
-(void)setCompoundId:(NSString *)arg1 ;
-(void)setCoordinate:(SCD_Struct_IG26)arg1 ;
-(SCD_Struct_IG26)coordinate;
-(char)isEqual:(id)arg1 ;
-(NSString *)thumbnail;
-(void)setThumbnail:(NSString *)arg1 ;
-(void)setLatitude:(double)arg1 andLongitude:(double)arg2 ;
-(void)setUserId:(NSString *)arg1 ;
-(NSString *)userId;
-(NSString *)locationName;
-(void)setLocationName:(NSString *)arg1 ;
@end


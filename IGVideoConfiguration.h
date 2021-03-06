
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface IGVideoConfiguration : NSObject <NSSecureCoding, NSCopying> {

	NSString* _UUID;
	float _squarePerPixelBitrate;
	float _sixteenByNinePerPixelBitrate;
	float _nineBySixteenPerPixelBitrate;
	float _fastVideoBitrateMultiplier;
	float _minDownscaleForHQResize;
	float _minWidth;
	float _maxWidth;
	float _maxWidthForHiResLandscape;
	float _aspectThresholdForHiResLandscape;

}

@property (nonatomic,readonly) NSString * UUID;                                     //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) float squarePerPixelBitrate;                         //@synthesize squarePerPixelBitrate=_squarePerPixelBitrate - In the implementation block
@property (nonatomic,readonly) float sixteenByNinePerPixelBitrate;                  //@synthesize sixteenByNinePerPixelBitrate=_sixteenByNinePerPixelBitrate - In the implementation block
@property (nonatomic,readonly) float nineBySixteenPerPixelBitrate;                  //@synthesize nineBySixteenPerPixelBitrate=_nineBySixteenPerPixelBitrate - In the implementation block
@property (nonatomic,readonly) float fastVideoBitrateMultiplier;                    //@synthesize fastVideoBitrateMultiplier=_fastVideoBitrateMultiplier - In the implementation block
@property (nonatomic,readonly) float minDownscaleForHQResize;                       //@synthesize minDownscaleForHQResize=_minDownscaleForHQResize - In the implementation block
@property (nonatomic,readonly) float minWidth;                                      //@synthesize minWidth=_minWidth - In the implementation block
@property (nonatomic,readonly) float maxWidth;                                      //@synthesize maxWidth=_maxWidth - In the implementation block
@property (nonatomic,readonly) float maxWidthForHiResLandscape;                     //@synthesize maxWidthForHiResLandscape=_maxWidthForHiResLandscape - In the implementation block
@property (nonatomic,readonly) float aspectThresholdForHiResLandscape;              //@synthesize aspectThresholdForHiResLandscape=_aspectThresholdForHiResLandscape - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithUUID:(id)arg1 squarePerPixelBitrate:(float)arg2 sixteenByNinePerPixelBitrate:(float)arg3 nineBySixteenPerPixelBitrate:(float)arg4 fastVideoBitrateMultiplier:(float)arg5 minDownscaleForHQResize:(float)arg6 minWidth:(float)arg7 maxWidth:(float)arg8 maxWidthForHiResLandscape:(float)arg9 aspectThresholdForHiResLandscape:(float)arg10 ;
-(float)squarePerPixelBitrate;
-(float)sixteenByNinePerPixelBitrate;
-(float)nineBySixteenPerPixelBitrate;
-(float)fastVideoBitrateMultiplier;
-(float)minDownscaleForHQResize;
-(float)maxWidthForHiResLandscape;
-(float)aspectThresholdForHiResLandscape;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)UUID;
-(float)maxWidth;
-(float)minWidth;
@end


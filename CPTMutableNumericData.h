
#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTNumericData.h>

@class NSArray;

@interface CPTMutableNumericData : CPTNumericData

@property (assign,nonatomic) CPTNumericDataType dataType; 
@property (assign,nonatomic) int dataTypeFormat; 
@property (assign,nonatomic) unsigned long sampleBytes; 
@property (assign,nonatomic) long byteOrder; 
@property (nonatomic,readonly) void* mutableBytes; 
@property (nonatomic,copy) NSArray * shape; 
-(void)convertToType:(int)arg1 sampleBytes:(unsigned long)arg2 byteOrder:(long)arg3 ;
-(void)setDataTypeFormat:(int)arg1 ;
-(void)setSampleBytes:(unsigned long)arg1 ;
-(void)setByteOrder:(long)arg1 ;
-(void*)mutableSamplePointer:(unsigned)arg1 ;
-(void*)mutableSamplePointerAtIndex:(unsigned)arg1 ;
-(void*)mutableBytes;
@end


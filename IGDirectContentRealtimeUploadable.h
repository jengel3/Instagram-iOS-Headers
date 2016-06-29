

@protocol IGDirectContentRealtimeUploadable <IGDirectUploadable>
@required
-(id)dictionaryForRealtimeUpload;
-(char)supportsNonSimpleFormatForRealtime;

@end

